import ctypes
fun=ctypes.CDLL("factorial_function.so")
fun.fact.argtypes=[ctypes.c_int]
n=10
fact=fun.fact(n)
print("N=%d"%n)
print("N!=%d"%fact)
