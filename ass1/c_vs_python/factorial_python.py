import time
def factorial(n):
	prod=n
	if n>1:
		prod=prod*factorial(n-1)
	return prod
n=20
t=time.time()
fact=factorial(n)
t=time.time()-t
print("Using recursion in python")
print("Time=%f"%t)
print("N=%d"%n)
print("N!=%d"%fact)
