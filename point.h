
class point
{
private:
    float x;
    float y;
public:
    point() {
        x = 0;
        y = 0;
    }
    point(float x2, float y2)
    {
        x = x2;
        y = y2;
    }

    void  setx(float x2) { x = x2; }
    void sety(float y2) { y = y2; }
    float getx() const { return x; }
    float gety() const { return y; }
    void display() const { cout << x << ", " << y; }

    float distance(const point& p) const
    {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }


};
