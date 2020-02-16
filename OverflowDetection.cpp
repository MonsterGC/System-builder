class IsIntegerOverFlow{
    public:
        // unsigned
        bool IsOverFlow(unsigned x, unsigned y)
        {
            unsigned z = x + y;
            if(z < x)
                return true;
            return false;
        }

        // int
        bool IsOverFlow(int x, int y)
        {
            int z = x + y;
            if(x > 0 && y > 0 && z < 0)
                return true;  
            if(x < 0 && y <  0 && z > 0)
                return true;
            return false;
        }
};