"""
S="mumbai"
for i in S:
	print("char=",i)
	print("unicode code point=",ord(i))

"""

"""
S="mumbai"
Sum=0
for i in S:
	Sum=Sum+ord(i)
print("Sum=",Sum)
"""



"""
#using List Methods
S="mumbai"
ord_list=[]
for i in S:
	ord_list.append(ord(i))	
print(ord_list)	
"""


"""
#using list comprehension
S="mumbai"
ord_list=[ord(i) for i in S]
print(ord_list)
"""


#using map() class
def char_ord(c):
	return ord(c)
chars=("m","u","m","b","a","i")
ord_list=map(char_ord,chars)
print(list(ord_list))

