a=[0,1,2,3,4,5]
for i in a:
	try:
		print(1/i)
	except ZeroDivisionError:
		print("indeterminate")
		
