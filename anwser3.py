import sys

nterms = 10

f1 = 1
f2 = 1
fn = 0
count = 0

if nterms <= 0:
	print ("Enter a positive number")
	
elif nterms == 1:
	print (f1)
	
else:
	while count <= nterms:
		print(f1,f2)
		fth = (fn - 1) + (fn - 2)
		f1 = f2
		f2 = fth
		count += 1