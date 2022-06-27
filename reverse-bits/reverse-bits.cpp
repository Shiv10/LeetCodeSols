class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t output = 0;
        int last_bit;
        for(int i = 0; i < 32; i++)
        {
            last_bit = n % 2;
            n = n / 2;
			// update output with each last bit
            output += last_bit * pow(2, 32 - i - 1);
        }
                    
        return output;
    }
};