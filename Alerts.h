#include <vector>
class IAlerter
{
  public:
  IAlerter();
  ~IAlerter();
};

class EmailAlert : public IAlerter
{
 public:
  EmailAlert();
  ~EmailAlert();
  bool emailSent;
};

class LEDAlert : public IAlerter
{
 public:
    LEDAlert();
    ~LEDAlert();
    bool ledGlows;
};

class StatsAlerter 
{
  public:
    /*member functions*/
    StatsAlerter(float thresholdValue, std::vector<IAlerter*> alerters);
    ~StatsAlerter();
    checkAndAlert(const std::vector<float>& values);
    
  private:
    /*member variables*/
    float threshold;
    std::vector<IAlerter*> alerts;
};
