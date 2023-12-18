class Melody
{
public:
    Melody(float noteDelay);
    ~Melody();

    float getNote();
    float updateNote();
    void setNoteDelay(float seconds);

private:
    int index;
    float samplerate;
    int frameIndex;
    float noteDelay;
    float melody[10] = {60, 64, 67, 71, 64, 67, 64, 69, 60, 55};
};
