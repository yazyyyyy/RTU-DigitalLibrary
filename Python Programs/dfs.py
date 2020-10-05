#dfs using adjacency list method
def dfs(i):
    global visited
    global b
    visited[i]=True # after visiting we will do visited=true 
    print(i)
    for j in b[i]:# go to the adjacent nodes of the visited node and visit them if not already visited
        if(visited[j]==False): 
            dfs(j)
    
a=[int(i) for i in input().split()] #take input from user in the form of no of nodes(n) and no of links ex 4 3
visited=[False]*a[0] #initialise the visited array to false because none are visited at start
b=[[] for i in range(a[0])] #array having n empty lists to form an adjacency list  
#formation of adjacency list
for i in range(a[1]): #input of connections example 0 1,1 2 etc
    c=[int(i) for i in input().split()]
    b[c[0]].append(c[1])
    b[c[1]].append(c[0])
    
#dfs function
for i in range(a[0]):
    if(visited[i]==False):
        dfs(i)
