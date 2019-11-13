rep = int(input())
i=0
while i<rep:
    j=rep-i-1
    while j>0:
        j-=1
        print(' ',sep='',end='')
    j=(i*2)+1
    while j>0:
        j-=1
        print('*',sep='',end='')
    print()
    i+=1
    
        
