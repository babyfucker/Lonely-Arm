#ifndef PART_H_
#define PART_H_
class Parts
{
    public:
        Parts(int numParts);
        void pushParts();
     private:
        /* Attributes */
        float partHeight;
        float jointRadius;
        float handHeight;
        int   numParts;
        /* Methods */
        void drawPart();
        void drawJoint();
        void drawHand();
};
#endif
