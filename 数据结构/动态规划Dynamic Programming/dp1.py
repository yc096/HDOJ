#相邻不能选，选出最大的
arr = [1,2,4,1,7,8,3]
#递归形式
def rec_opt(arr,i):
    if i==0:
        return arr[0]
    elif i==1:
        return max(arr[0],arr[1])
    else:
        A = rec_opt(arr,i-2)+arr[i]
        B = rec_opt(arr,i-1)
        return max(A,B)
#rec_opt(arr,6)

#非递归形式
def dp_opt(arr):
    opt = [0]*len(arr)
    opt[0] = arr[0]
    opt[1] = max(arr[0],arr[1])
    for i in range(2,len(arr)):
        A = rec_opt(arr,i-2)+arr[i]
        B = rec_opt(arr,i-1)
        opt[i] = max(A,B)
    return opt[len(arr)-1]
dp_opt(arr)