try:
	f=open("file.txt")
except:
	print("File not found ! ")
else:
	a=f.read()
	ls=a.split(" ")
	dict={}
	for word in ls:
		if word in dict:
			dict[word]+=1
		else:
			dict[word]=1
	for word in dict:
		print(word,"=",dict[word])
