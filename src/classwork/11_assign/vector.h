//



class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); //copy constructor.
	Vector& operator=(const Vector& v); //copy assignment
	Vector(Vector&& v); // move constructor
	Vector& operator=(const Vector&& v); //move assignment
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i)const { return nums[i]; }
	~Vector();
private:
	size_t size;
	int* nums;

};