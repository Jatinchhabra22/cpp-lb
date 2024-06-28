// decimal to binary //
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the digit you want binary representation for :";
    cin>>n;
    
    int ans = 0;
    int i= 0;
    
    while(n != 0){
        
        int bit = n&1;
        
         ans  = (bit * pow(10,i)) + ans;
        
        n = n>>1;
        i++;
    }
    cout<<ans<<endl;
}

/*
Let's break it down step by step with a simpler example:

Consider you want to find the binary representation of the number `5`.

1. **Binary Representation Basics**:
   - The binary representation of `5` is `101`.
   - In binary, each digit represents a power of 2, starting from the rightmost digit (the least significant bit).

2. **Extracting the Least Significant Bit**:
   - The least significant bit (LSB) is the rightmost bit in a binary number.
   - To get the LSB of a number, you can use the bitwise AND operation with `1`.
   - Why? Because `1` in binary is `000...001`. Only the LSB is `1`, and all other bits are `0`.

3. **Bitwise AND Operation**:
   - `n & 1` checks the LSB of `n`.
   - If `n` is `5` (which is `101` in binary):
     - `5 & 1` results in `1` because:
       ```
       101
     & 001
     -----
       001
       ```
     - So, the result is `1`.

4. **Example of the Process**:
   - Let’s apply this to convert `5` to binary:
     - Start with `n = 5`:
       - `5 & 1` gives `1` (the rightmost bit).
       - Right shift `n` by 1 (`n = n >> 1`), now `n` becomes `2` (which is `10` in binary).
     - Now `n = 2`:
       - `2 & 1` gives `0`.
       - Right shift `n` by 1, now `n` becomes `1` (which is `1` in binary).
     - Now `n = 1`:
       - `1 & 1` gives `1`.
       - Right shift `n` by 1, now `n` becomes `0`.

So, the binary representation of `5` is constructed from the extracted bits: `101`.

5. **Step-by-Step Code Explanation**:

Here's the full process in code:

```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the digit you want binary representation for: ";
    cin >> n;

    int ans = 0;
    int i = 1; // Multiplier starts at 1 (10^0)

    while (n != 0) {
        int bit = n & 1;  // Extract the least significant bit
        ans += bit * i;   // Add this bit to the result in its correct position
        n = n >> 1;      // Right shift n to process the next bit
        i *= 10;         // Move to the next decimal place
    }

    cout << "Binary representation: " << ans << endl;
    return 0;
}
```

Here's a step-by-step explanation of the loop:
1. `int bit = n & 1;` extracts the least significant bit of `n`.
2. `ans += bit * i;` places this bit in the correct position in the final binary number.
3. `n = n >> 1;` shifts `n` to the right by 1 bit, effectively dividing `n` by 2 and discarding the bit that was just processed.
4. `i *= 10;` moves to the next decimal place in the binary number.

*/