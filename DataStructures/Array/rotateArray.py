def leftRotate(arr, times, length):
    for i in range(times):
        leftRotateByOne(arr, length)

def leftRotateByOne(arr, length):
    temp = arr[0]
    for i in range(length-1):
        arr[i] = arr[i+1]
    arr[length-1] = temp
def printArray(arr, length):
    for i in range(length):
        print("%d ", %arr[i], end=" ")

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5,6 ,7]
    leftRotate(arr, 2, 7)
    printArray(arr, 7)

