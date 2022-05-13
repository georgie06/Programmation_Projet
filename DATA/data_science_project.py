import numpy as np
players = [180, 172, 178, 185, 190, 195, 192, 200, 210, 190]
st_mean = np.average(players)
st_var = np.var(players)
st_dev = np.std(players)
j = 0

low_bound = st_mean - st_dev
high_bound = st_mean + st_dev
for i in range(0,len(players)):
    if players[i] >= low_bound and players[i] <= high_bound :
       j+=1
print(j)
data = np.array([150000, 125000, 320000, 540000, 200000, 120000, 160000, 230000, 280000, 290000, 300000, 500000, 420000, 100000, 150000, 280000])
players = [180, 172, 178, 185, 190, 195, 192, 200, 210, 190]
st_mean = np.average(data)
st_var = np.var(data)
st_dev = np.std(data)
j = 0

low_bound = st_mean - st_dev
high_bound = st_mean + st_dev
for i in range(0,len(data)):
    if data[i] >= low_bound and data[i] <= high_bound :
       j+=1
pourcentage = j/len(data)
print(pourcentage*100)


#print(st_dev)