ieee_num_list=["0100000010101001001100000000000000000000000000000000000000000000","1100000010101001001100000000000000000000000000000000000000000000","0011111111110101001100000000000000000000000000000000000000000000","0011111111110101001100000000000000000000000000000000000000000001"]
for ieee_num in ieee_num_list:
	sign=(-1)**int(ieee_num[0])
	exp=ieee_num[1:12]
	mantissa=ieee_num[12:]
	def exp_bin2dec(exp):
		out=0
		for i in range(len(exp)):
			out=out+int(exp[i])*(2**(11-i-1))
		out=out-1023
		return out
	def mant_bin2dec(mant):
		out=0
		for i in range(len(mant)):
			out=out+int(mant[i])*(2**(-i-1))
		return out
	exp_dec=exp_bin2dec(exp)
	mantissa_dec=1+mant_bin2dec(mantissa)
	dec_num=sign*mantissa_dec*2**exp_dec
	print("ieee_num=",*ieee_num)
	print("dec_num=",dec_num)
