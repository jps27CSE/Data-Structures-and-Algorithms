dictionary={1:'Jack', 2:'Pritom', 3:'Soren'}

print(dictionary[1])
print(dictionary[2])
print(dictionary[3])


#adding value

dictionary[4]='Loves Computer'

print(dictionary)

#copy dictionary

copy_of_dictionary=dictionary.copy()

print(copy_of_dictionary)

#values function

print(dictionary.values())

#update function

print(dictionary.update())


#get function

print(dictionary.get(1))


#items function

print(dictionary.items())

#keys function

print(dictionary.keys())

#pop function

print(dictionary.pop(3))

#popitem function

print(dictionary.popitem())

#setdefault function

print(dictionary.setdefault(1))

#dictionary constructor

mydictionary=dict(key1='hello',key2='everyone')

print(mydictionary)

#clear dictionary

print(dictionary.clear())
