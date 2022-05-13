imports = []
global_var = []
indents = [0,]
indent_level = 0
class_name = None
class_level = -1
class_var = []
function_name = None
function_level = -1
function_var = []
try:
  lines = f.readlines()
  for l in lines:
    comment = None
    words = l.split()
    if len(words) > 0:
      words2 = []
      for w in words:
        if comment != None:
          comment += w + ' '
        else:
          if w[0] == "'":
            pass
          if w[0] == '#':
            comment = '// '+w[1:]
          else:
            words2.append(w)
      words = words2
      print words, comment
    if len(words) > 0:
      for indent in range(len(l)):
        if l[indent] != ' ':
          break
      while indent < indents[indent_level]:
        if indent_level > 0:
          indent_level -= 1
        if indents[indent_level] > 0:
          print >> o, ' '*indents[indent_level]+'}'
        if class_level >= indent_level:
          class_level = -1
          class_name = None
          class_var = []
        if function_level >= indent_level:
          function_level = -1
          function_name = None
          function_var = []
          function_arg = []
      if indent > indents[indent_level]:
        indent_level += 1
        while len(indents) <= indent_level:
          indents.append(indent)
    if indents[indent_level] > 0:
      print >> o, ' '*(indents[indent_level]-1),  # preserve indent
    if len(words) > 0:
      if words[0] == 'import':
        for w in words[1:]:
          print >> o, '#include "%s.h"' % (w,),
          imports.append(w)
      elif words[0] == 'from' and words[2] == 'import':
        w = words[1]
        print >> o, '#include "%s.h"' % (w,),
      elif words[0] == 'class':
        class_name = words[1]
        class_level = indent_level
        if class_name.endswith(':'):
          class_name = class_name[:len(class_name)-1]
        print >> o, 'class %s { public;' % (class_name,),
      elif words[0] == 'def':
        function_name,function_args = words[1].split('(')
        function_level = indent_level
        function_var = []
        #print "**********def",function_name,function_args
        #  function_name,sep,function_args = words[1].partition('(')  # python 2.5
        if class_name:
          function_args = function_args[5:]  # remove self arg
          if function_name == '__init__':
            function_name = class_name  # ie constructor
          # print >> o, '%s::' % (class_name,),    # for seperate functions from headers
        if function_args.endswith(':'):
          function_args = function_args[:len(function_args)-1]
        if function_args.endswith(')'):
          function_args = function_args[:len(function_args)-1]
        function_arg = function_args.split(',')
        #print "**********def",function_name,function_args
        print >> o, '%s(%s) {' % (function_name,function_args),
      elif words[0] =='return':
        print >> o, 'return',
        returns = 0
        if len(words) > 1:
          print >> o,'(',
          for w in words[1:]:
            if ',' in w:
              returns += 1
            print >> o ,w,   # can't really do anything about multi returns
            returns += 1
          print >> o,')',
        print >> o,';',
        if returns > 1:
          print >> o,' *******multi return*******',
      elif words[0] == 'global':
        pass
      elif words[0] == 'for' and words[2] == 'in':
        start = '0'
        step = '++'
        if words[3].startswith('range'):
          index = words[1]
          for_args = words[3].split('(')
          if ',' in for_args:
            for_args = for_args[1].split(',')
            start = float(for_args[0])
            if len(for_args) > 2:
              step = '+= ' + for_args[1]
            end_arg = for_args[len(for_args)-1]
            end = end_arg[:len(end_arg)-1]
        else:
          for_var = words[3]
          if for_var.endswith(':'):
            for_var = for_var[:len(for_var)-1]
          index = 'index'
          start = '0'
          end = 'sizeof('+for_var+')'
        print >> o, 'for(%s = %s;%s < %s;%s %s) {' % (index,start,index,end,index,step),
        if not words[3].startswith('range'):
          print >> o, '%s = %s[index];' % (words[1],for_var),

      elif '=' in l:  # let statement of some sort
        fw = 0
        varlist = global_var
        if words[0].startswith('self.'):
          words[0] = words[0][5:]
          varlist = class_var
        elif function_name != None:
          if not words[0] in function_arg:
            varlist = function_var
        if not words[0] in varlist:
          varlist.append(words[0])
          if flash:
            words[0] = "var "+words[0]+":"
            if words[1] == '=' and (words[2][0] == '"' or words[2][0] == "'"):
              words[0] += "string"
            else:   # big assumption
              words[0] += "number"
        for w in words:
          if w == 'True':
            w = 1
          if w == 'False':
            w = 0
          print >> o, "%s" % (w,),
        print >> o, ";",
      elif words[0] in ('if','elif','while'):
        if words[0] == 'elif':
          print >> o, 'else ',
        print >> o, '%s(' % (words[0],),
        p = 1
        for w in words[1:]:
          if w == 'True':
            w = 1
          if w == 'False':
            w = 1
          if w == 'not':
            w = '!('
            p += 1
          if w == 'and':
            w = ') && ('
            p += 1
          if w == 'or':
            w = ') || ('
            p += 1
          if w == ':':
            break
          if w.endswith(':'):
            w = w[0:len(w)-1]
          print >> o, w,
        print >> o, ')'*p,
        print >> o, ' { ',
        if p > 1:
          print >> o, ' ****check parenthesis matching ****',
      elif words[0] == 'else:':
        print >> o, 'else {',
      else:
        #print >> o, '//////',
        for w in words:
          print >> o, w,
        print >> o,';',
      last_indent = indent
    if comment:
      print >> o, comment,
    print >> o
finally:
  f.close()
  o.close()

