class Interpolation{
    static float nnMap(float value, float low, float high){
        float middle = high - low;
        if (value < middle)
        {
            value = low;
        }else{
            value = high;
        }

        return value;
    }

    static float linMap(float value, float low, float high){
        float output = (1.0f - value) * low;
        output += value * high;
        return output;
    }
    static float mapInRange(float value,float fromLow,float fromHigh,float toLow,float toHigh)
};
