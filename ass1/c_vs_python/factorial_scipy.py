import time
from scipy.special import factorial
n=20;
t=time.time()
fact=factorial(n)
t=time.time()-t
print("Using scipy in python")
print("Time=%f"%t)
print("N=%d"%n)
print("N!=%d"%fact)
