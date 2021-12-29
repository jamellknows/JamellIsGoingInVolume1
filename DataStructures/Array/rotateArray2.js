function gcd(a, b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a %b);
    }
}

function leftRotate(arr, d, n){
    d = d % n;
    let g_c_d = gcd(d, n);
    for(let i = 0; i < g_c_d; i ++){
        let temp = arr[i];
        let j = i;
        while(1){
            let k = j + d;
            if( k >= n){
                k = k -n;
            }
            if (k == i)
            {
                break;
            }
            arr[j] = arr[k];
            j = k; // make it break
        }
        arr[j] = temp; // pivot rotates everything around it 
    }
}

function printArray(arr, n)
{
    for(let i = 0; i < n; i++)
    {
        document.write(arr[i] + " ");
    }
}

let arr = [1, 2, 3, 4, 5, 6, 7, 8];
let n = arr.length;

leftRotate(arr, 2, n);
printAray(arr, n);