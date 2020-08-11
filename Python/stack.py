#create a stack 

def create_stack():
    stack=[]

    return stack    

#checking stack  

def check_stack(stack):

    return len(stack)==0


#storing elements in stack 

def push(stack,item):
    stack.append(item)
    print(f"pushed item: " +item)


#removing elements from stack 

def pop(stack):
    
    if check_stack(stack):
        return"stack is empty"
    
    return stack.pop()


stack=create_stack()

push(stack,str(1))
push(stack,str(2))



print(f"popped item: {pop(stack)} "  )
print(f"stack after popping an element: { str(stack)}" )

