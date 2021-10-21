#include <vector>
class IAlerter
{
  public:
  IAlerter();
  ~IAlerter();
  bool emailSent;
  bool ledGlows;
};

class EmailAlert : public IAlerter
{
 public:
  EmailAlert();
  ~EmailAlert();
};

class LEDAlert : public IAlerter
{
 public:
    LEDAlert();
    ~LEDAlert();
};

class StatsAlerter 
{
  public:
    /*member functions*/
    StatsAlerter(float thresholdValue, std::vector<IAlerter*> alerters);
    ~StatsAlerter();
    void checkAndAlert(const std::vector<float>& values);
    
  private:
    /*member variables*/
    float threshold;
    std::vector<IAlerter*> alerts;
};
