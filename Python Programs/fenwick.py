"""code for binary indexed tree or fenwick tree"""
bit=[0]*1000

def update(x,delta):
    global bit
    global n
    while(x<=n):
        bit[x]+=delta
        x+=x&-x
        
def query(x):
    global bit
    sum1=0
    while(x>0):
        sum1+=bit[x]
        x-=(x&-x)
    
    print(sum1)

n=int(input())
b=[]
for i in range(1,n+1):
    c=int(input())
    update(i,c)

print(bit[:10:])

query(9)
        
