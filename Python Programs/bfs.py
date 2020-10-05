#bfs using adjacency list method
def bfs(i):
    a=[] # we willuse A like a queue to put elements into the queue 
    global visited
    global b
    a.append(i)
    visited[i]=True
    while(len(a)!=0):
        f=a[0]
        a.pop(0)
        print(f)
        for j in b[f]:# go to the adjacent nodes of the visited node and visit them if not already visited
            if(visited[j]==False):
                a.append(j)
                visited[j]=True
        
    
a=[int(i) for i in input().split()] #take input from user in the form of no of nodes(n) and no of links ex 4 3
visited=[False]*a[0] #initialise the visited array to false because none are visited at start
b=[[] for i in range(a[0])] #array having n empty lists to form an adjacency list  
#formation of adjacency list
for i in range(a[1]): #input of connections example 0 1,1 2 etc
    c=[int(i) for i in input().split()]
    b[c[0]].append(c[1])
    b[c[1]].append(c[0])
    
#bfs function
for i in range(a[0]):
    if(visited[i]==False):
        bfs(i)
