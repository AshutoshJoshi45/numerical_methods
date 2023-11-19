import timeit
mysetup="import fibonacci_module"
mycode="""
lst=fibonacci_module.fibonacci(100)
"""
print("Time taken=",timeit.timeit(setup=mysetup,stmt=mycode,number=10000)/10000,"sec")
#Timit function runs the code "number" number of times, and hence the time I've printed is the average time
