num=int(input())
list_of_prime=[True for var in range(num+1)]
for var in range(2,int(m.sqrt(num))):
	if list_of_prime[var]==True:
		for j in range(2,num):
			if var*j >num:
				break
			list_of_prime[var*j]=False
val=[]
for var in range(2,num):
	if list_of_prime[var]==True:
		val.append(var)
print(val)
