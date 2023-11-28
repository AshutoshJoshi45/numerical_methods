import numpy as np
dict_data={"alpha":0.0072973525693,"c":29979245800,"G":6.6743*10**(-8),"h":4.1367*10**(-15),"k":8.6173*10**(-5),"H0":1.6202*10**(-17),"M_sun":3.955*10**33}
for i in dict_data.keys():
    dec_num=dict_data[i]
    #dec_num=6.6743*10**(-8)
    dec_l=int(np.floor(abs(dec_num)))
    dec_r=abs(dec_num)-dec_l
    def dec_l2b(num,l=[]):
        l.append(num%2)
        num=num//2
        if num!=0:
            dec_l2b(num,l)
        if num==0:
            l.reverse()
        return l
    def dec_r2b(num,l=[],count=0):
        d=num*2
        if d>=1:
            d1=1
            num=d-1
        else:
            d1=0
            num=d
        l.append(d1)
        count=count+1
        if count!=100:
            dec_r2b(num,l,count)
        return l
    a=dec_l2b(dec_l,[])
    b=dec_r2b(dec_r,[])
    c=a+b
    for j in range(len(c)):
        if c[j]==1:
            mantissa=c[j:]
            break;
    mantissa=mantissa[1:53]
    if dec_l!=0:
        exp=len(a)-1+1023
    else:
        exp=-j+1023
    exp_bin=dec_l2b(exp,[])
    e_size=len(exp_bin)
    temp=[]
    for j in range(11-e_size):
        temp.append(0)
    exp_bin=temp+exp_bin
    if dec_num>=0:
        sign_bit=[0]
    else:
        sign_bit=[1]
    num_32_bit=sign_bit+["\t"]+exp_bin+["\t"]+mantissa
    print(i)
    print("Decimal number=",dec_num)
    print("IEEE 754 standard 64 bit number=",*num_32_bit)
