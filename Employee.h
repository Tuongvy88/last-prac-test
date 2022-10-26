class Employee
{
protected:
    int payRate;
    float energyLevel = 100; // Initially 100%
public:
    Employee(int payRate); // creates a Employee with payRate

    void takeABreak(int mins);

    int get_payRate();
    void set_payRate(int payRate);

    float get_energyLevel();
    void set_energyLevel(float energyLevel);

    virtual void work(int mins) = 0;
    virtual float pay() = 0;
};

#endif  