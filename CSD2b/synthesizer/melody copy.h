class Melody
{
public:
    Melody(float noteDelay);
    ~Melody();

    float getNote();
    float updateNote();
    void setNoteDelay(float seconds);

private:
    int measure;
    int index1;
    int index2;
    float samplerate;
    int frameIndex;
    float noteDelay;
    float melody[2][4] = {{59, 63, 59, 66},{59, 64, 59, 67}};
};
