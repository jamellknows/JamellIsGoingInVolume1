def leftRotate(arr, d, n):
    d = d %🅰 
    g_c_d = gcd(d, n)
    for i in range(g_c_d):
        temp = arr[i]
        j = i
        while(1):
            k = j + d
            if k >= n:
                k = k -n
            if k == i:
                break
            arr[j] = arr[k]
            j = k
        arr[j] = temp


def gcd(a, b):
    if(b == 0):
        return a
    return gcd(b, a%b)

def printArray(arr, size):
    for i in range(size):
        print("% d" % arr[i], end = " ")

if __name__ = "__main__":
   arr= [1, 2, 3, 4, 5, 6, 7]
   n = len(arr)
   d = 2
   leftRotate(arr, d, n)
   printArray(arr, n)


