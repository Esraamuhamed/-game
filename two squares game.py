a=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
print(a[1],a[2],a[3],a[4])
print(a[5],a[6],a[7],a[8])
print(a[9],a[10],a[11],a[12])
print(a[13],a[14],a[15],a[16])
playerturn = 1
while (True):
    m=int(input("Enter square num:"))
    n=int(input("Enter square num:"))   
    if (((m>0 and m<=16 and n>0 and n<=16)and(a[m]!='x' and a[n]!='x')))and(((n>m and n-m==1 and m%4!=0)or(n>m and n-m==4))or((m>n and m-n==1 and n%4!=0)or(m>n and m-n==4))) :
                a[m]='x'
                a[n]='x' 
                print(a[1],a[2],a[3],a[4])
                print(a[5],a[6],a[7],a[8])
                print(a[9],a[10],a[11],a[12])
                print(a[13],a[14],a[15],a[16])          
    else :
            while True:
                m=int(input("stupid!Enter another num-.-:"))
                n=int(input("stupid!Enter another num-.-:"))
                if ((m>0 and m<16 and n>1 and n<=16)and(n>m and n-m==1 and m%4!=0)or(n>m and n-m==4 )and (a[m]!='x' and a[n]!='x')):
                    a[m]='x'
                    a[n]='x'
                    print(a[1],a[2],a[3],a[4])
                    print(a[5],a[6],a[7],a[8])
                    print(a[9],a[10],a[11],a[12])
                    print(a[13],a[14],a[15],a[16])  
                    break
    cnt = 0
    for i in range (1,17):
        if( (i==16 or a[i+1]=='x') and (i>=13 or a[i+4]=='x')) or( a[i]=='x'):
           cnt = cnt + 1
    if cnt == 16 :
        if playerturn == 1:
            print("Player1 is the winner ^0^")
        else:
            print("Player2 is the winner ^0^")
        break
    if playerturn == 1:
        playerturn = 2
    else:
        playerturn = 1
