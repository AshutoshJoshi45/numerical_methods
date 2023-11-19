def fibonacci(n=10):
	list_fibo=[]
	a=1
	b=1
	list_fibo.append(a)
	list_fibo.append(b)
	count=1
	while(count<=n-2):
		c=a+b
		list_fibo.append(c)
		a=b
		b=c
		count=count+1
	return list_fibo
#print(fibonacci(10))
