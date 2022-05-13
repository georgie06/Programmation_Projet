#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h> 
#include <signal.h>


#include <stdio.h>
int mystrncmp(const char *x, const char *y,int n) {
    for(;*x != n && *y != n && *x == *y;x++,y++);
    
    if (*x == *y) {
        return 0; // strings are identical
    }
    else {
        return *x - *y;
    }
}
int mystrcmp(const char *x, const char *y) 
{
    for(;*x != '\0' && *y != '\0' && *x == *y;x++,y++);
    
    if (*x == *y) {
        return 0; // strings are identical
    }
    else {
        return *x - *y;
    }
}
int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;
    
    for(; src[i]; dest[len + i] = src[i = i + 1]) {
        dest[len + i] ='\0';
    }
    return(dest);
}
char *mystrdup(char const *s)
{
    int len = my_strlen(s);
    char *dest = malloc(sizeof(char) *len + 1);

    for(int i = 0; s[i] != '\0'; i++) {
        dest[i] = s[i];
    } 
    return(dest);
}

char *my_strcpy(char *dest, char const *src)
{
    int len = my_strlen(src);
    int i = 0;

    for(; i != len; i++) {
        dest[i] = src[i];
    }
    return dest;
}


static char	*built_in_pwd(void);

typedef struct  envr_s {
	char *var;		// var name exemple : PATH
	struct envr_s *next;
} envr_t;
static envr_t *first = NULL;

static char	*get_env(char *var)
{
	envr_t * str = first;
    int len = strlen(var);

	do {
		if (!strncmp(var, str->var, len)) {
			return (str->var);
	}
    str = str->next;
     } while(str);
	return (NULL);
}
char ** mymalloc2d(int nombre_de_ligne,int nombre_de_colonne)
{
    int count = 0;
    char ** tab = malloc(nombre_de_ligne * sizeof(*tab)); /* malloc du nombre de ligne*/
    while (count <= nombre_de_ligne)
    tab[count++] = malloc(nombre_de_colonne * sizeof(tab));
    return tab;
}
static char	**split(char *raw_cmd, char *limit)
{
	char *ptr = NULL;
	char **cmd = NULL;
	int index = 0;

	// split sur les espaces
	ptr = mystrtok(raw_cmd, limit);

	/*while (ptr) {
		cmd = (char **)realloc(cmd, ((idx + 1) * sizeof(char *)));
		cmd[idx] = strdup(ptr);
		ptr = strtok(NULL, limit);
		++idx;
	}*/
    int len = (sizeof(char*)*index+1);
    do {
        cmd = mymalloc2d(len,20);
		cmd[index] = mystrdup(ptr);
		ptr = mystrtok(NULL, limit);
		++index;

    } while(ptr);
	// On alloue un element qu'on met a NULL a la fin du tableau
	cmd = mymalloc2d(len,20);
	cmd[index] = NULL;
	return (cmd);
}
static void	free_array(char **array)
{
	free(array);
	array = NULL;
}
static int	exec_cmd(char **cmd, char **env)
{
	pid_t pid = 0;
	int stat = 0;
	pid = fork();
	
    if (pid == -1) {
        printf("fork :");
        return 84;
    }
	if (pid > 0) {
        waitpid(pid, &stat, 0);
		kill(pid, SIGTERM);
	}
    else {
    int stock = execve(cmd[0], cmd, env);
        if (stock == -1) {
            printf("fork :");
            return 84;
        }
        //return 84;
        printf("shell :");
		exit(EXIT_FAILURE);
	}
    return 0;
}
static unsigned int	get_absolute_path(char **cmd, char **env) //void
{
	char *path = NULL;
	char *bin = NULL;
	char **pt_split = NULL;
    int	index = 0;
    int len = 0;
    int b = 0;
    int i = 0;

	if (cmd[0][0] != '/' && mystrncmp(cmd[0], "./", 2) != 0) {
		while (env[i]) {
            if (!mystrncmp(env[i], "PATH=", 5)) {
                path = mystrdup(&env[i][5]);
				break ;
			}
            i++;
		}
		if (path == NULL)
			return (0);
		pt_split = split(path, ":");
		free(path);
		path = NULL;

		index = 0;
        while (pt_split[index]) {
            len = (strlen(pt_split[index]) + 1 + strlen(cmd[0]) + 1);
			bin = mymalloc2d(len,30);
			if (bin == NULL)
				break ;
            my_strcat(bin, pt_split[index]);
			my_strcat(bin, "/");
			my_strcat(bin, cmd[0]);
            b = access(bin, F_OK);
			
            if (b == 0){
                break ;
            }
			free(bin);
			bin = NULL;
            index++;
		}
		free_array(pt_split);
		free(cmd[0]);
		cmd[0] = bin;
	} 
    else {
		free(path);
		path = NULL;
	}
    return (bin == NULL ? 0 : 1);
}
//a fre
static unsigned int is_built_in(char *cmd)
{
	char const *str[] = {"pwd", "cd", "env", NULL};

	for (int i = 0; str[i]; i++) {
		if (!mystrcmp(str[i], cmd))
			return (1);
	}
	return (0);
}
// afre
static void	built_in_cd(char *path)
{
	char *oldpwd = NULL;
	char *pwd = NULL;
	char *pwd_ptr = NULL;

	if (path == NULL)
		return;
	if (chdir(path) == 0) {
		pwd = strrchr(get_env("PWD="), '=') + 1;
		oldpwd = strrchr(get_env("OLDPWD="), '=') + 1;

		if (oldpwd != NULL && pwd != NULL) {
			my_strcpy(oldpwd, pwd);
		}
		if (pwd != NULL) {
			pwd = &pwd[-strlen("PWD=")];
			pwd_ptr = built_in_pwd();
			my_strcpy(pwd, pwd_ptr);
			free(pwd_ptr);
			pwd_ptr = NULL;
		}
	} else {
		my_printf("chdir");
        return 84;
	}
}
//a fre
static char	*built_in_pwd(void)
{
	char	*cwd = NULL;

	// On alloue la longueur de PWD= + PATH_MAX + 1 pour le \0
	cwd = malloc(sizeof(char)*PATH_MAX + my_strlen("PWD=") + 1);
	if (cwd == NULL)
		return (NULL);

	// On concatene le nom de la variable
	my_strcat(cwd, "PWD=");

	// et on stock le path actuelle apres le = de PATH=
	if (getcwd(&cwd[4], PATH_MAX) == NULL) {
		my_putstr("getcwd()");
        return 84;
	}
    return (cwd);
}
static void	built_in_env(void)
{
	envr_t	*tmp = first;

	while (tmp) {
		myprintf("%s\n", tmp->var);
		tmp = tmp->next;
	}
}

static void	exec_built_in(char **built_in)
{
	if (!mystrcmp(built_in[0], "pwd"))
		myprintf("%s\n", get_env_var("PWD="));
	else if (!mystrcmp(built_in[0], "cd"))
		built_in_cd(built_in[1]);
	else if (!mystrcmp(built_in[0], "env"))
		built_in_env();
}
static void	add_env_var(char *var)
{
    //getpwuid
	struct passwd *pw = getpwuid(getuid());
	char *alloc_mem = NULL;

	if (!mystrcmp(var, "HOME")) {
		alloc = malloc(sizeof(char)*my_strlen(pw->pw_dir) + my_strlen("HOME=") + 1);
		if (alloc == NULL) {
			fprintf(stderr, "Cannot add HOME\n");
			return ;
		}
		my_strcat(alloc, "HOME=");
		my_strcat(alloc, pw->pw_dir);
	} else if (!mystrcmp(var, "PATH")) {
		alloc = mystrdup("PATH=/bin:/usr/bin");
		if (alloc == NULL) {
			fprintf(stderr, "Cannot add PATH\n");
			return ;
		}
	} else if (!mystrcmp(var, "OLDPWD")) {
		alloc = mystrdup("OLDPWD=");
		if (alloc == NULL) {
			fprintf(stderr, "Cannot add OLDPWD\n");
			return ;
		}
	} else if (!mystrcmp(var, "PWD")) {
		alloc = built_in_pwd();
		if (alloc == NULL) {
			fprintf(stderr, "Cannot add PWD\n");
			return ;
		}
	} else if (!mystrcmp(var, "SHLVL")) {
		alloc = mystrdup("SHLVL=1");
		if (alloc == NULL) {
			fprintf(stderr, "Cannot add OLDPWD\n");
			return ;
		}
	}

	add_tail(alloc);
}

static void	dup_env(char **envp)
{
	char	*var_lst[] = {"PATH", "HOME", "OLDPWD", "PWD", "SHLVL", NULL};
	ssize_t	nb_elem = 5; // nombre d'element dasn var_lst

	// boucle sur l'env et stock les variables dans la liste
	for (int i = 0; envp[i]; i++) {
		add_tail(mystrdup(envp[i]));

		// On verifie que l'on a les variables d'environment minimal
		if (!strncmp(envp[i], "PATH", 4)) var_lst[0] = NULL;
		else if (!mystrncmp(envp[i], "HOME", 4)) var_lst[1] = NULL;
		else if (!mystrncmp(envp[i], "OLDPWD", 6)) var_lst[2] = NULL;
		else if (!mystrncmp(envp[i], "PWD", 3)) var_lst[3] = NULL;
		else if (!mystrncmp(envp[i], "SHLVL", 5)) var_lst[4] = NULL;
	}

	// On verifie qu l'on a les varaibles PATH, HOME, OLD_PWD et SHLVL
	// sinon on l'ajoute
	for (int i = 0; i < nb_elem; i++) {
		if (var_lst[i] != NULL)
			add_env_var(var_lst[i]);
	}
}

static void	add_tail(char *var)
{
	envr_t	*ptr = first;
	envr_t	*new = NULL;

	new = malloc(sizeof(envr_t)*1);
	if (new == NULL) {
		myprintf("mAlloc failure\n");
		return ;
	}
    new->var = var;
	new->next = NULL;

	if (ptr == NULL) {
		first = new;
	} 
    else {
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}
static char	**lst_to_array()
{
	char	**array = NULL;
	envr_t	*tmp = first;
	int	idx = 0;

	// On compte le nombre d'element dans la liste pour allouer un tableau de pointeurs
	// ou chaque pointeur pointera sur notre environment
	while (tmp) {
		idx++;
		tmp= tmp->next;
	}

	// Allcoation (+ 1 pour l'element null de fin)
	array = (char **)calloc(sizeof(char *), idx + 1);mymalloc2d(idx+1,30);
	if (array == NULL) {
		perror("calloc");
		exit(-1);
	}

	// reset des variables
	tmp = first;
	idx = 0;

	// On fait pointer chaque pointeur sur notrte environment
	while (tmp) {
		array[idx] = tmp->var;
		tmp = tmp->next;
		idx++;
	}

	return (array);
}

static void	free_lst(void)
{
	t_env	*idx = first;
	t_env	*tmp = idx;

	while (idx != NULL) {
		tmp = idx;
		idx = idx->next;
		free(tmp->var);
		tmp->var = NULL;
		free(tmp);
		tmp = NULL;
	}
}

int	main(int argc, char **argv, char **envp)
{
	char	*buffer = NULL;
	//buf_size = 2048
	char	**cmd = NULL;
	char	**env = NULL;

	dup_env(envp);

	// alloc buffer qui stockera la commande entree par l'user
	buffer = /*(char *)calloc(sizeof(char), buf_size);*/mymalloc2d(2048,30);
	if (buffer == NULL) {
		perror("Malloc failure");
		return (EXIT_FAILURE);
	}

	// ecriture d'un prompt
	write(1, "$> ", 3);

	// lecture de STDIN en boucle
	while (my_getline(&buffer, &buf_size, stdin) > 0) {
		cmd = split(buffer, " \n\t");

		if (cmd[0] == NULL)
			fprintf(stderr, "Command not found\n");
		else if (is_built_in(cmd[0]) == true) {
			exec_built_in(cmd);
		} else {
			env = lst_to_array();
			if (get_absolute_path(cmd, env) == true) {
				exec_cmd(cmd, env);
			} else {
				fprintf(stderr, "Command not found\n");
			}
			free(env);
			env = NULL;
		}

		write(1, "$> ", 3);
		free_array(cmd);

	}

	free_lst();
	printf("Bye \n");
	free(buffer);

	return (0);
}
unsigned int is_delim(char c, char *delim)
{
    while(*delim != '\0')
    {
        if(c == *delim)
            return 1;
        delim++;
    }
    return 0;
}
char *mystrtok(char *srcString, char *delim)
{
    static char *backup_string; // start of the next search
    if(!srcString)
    {
        srcString = backup_string;
    }
    if(!srcString)
    {
        // user is bad user
        return NULL;
    }
    // handle beginning of the string containing delims
    while(1)
    {
        if(is_delim(*srcString, delim))
        {
            srcString++;
            continue;
        }
        if(*srcString == '\0')
        {
            // we've reached the end of the string
            return NULL; 
        }
        break;
    }
    char *ret = srcString;
    while(1)
    {
        if(*srcString == '\0')
        {
            /*end of the input string and
            next exec will return NULL*/
            backup_string = srcString;
            return ret;
        }
        if(is_delim(*srcString, delim))
        {
            *srcString = '\0';
            backup_string = srcString + 1;
            return ret;
        }
        srcString++;
    }
}