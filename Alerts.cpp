#include "Alerts.h"
#include "algorithm"

StatsAlerter::StatsAlerter(float thresholdValue, std::vector<IAlerter*> alerters)
{
  threshold = thresholdValue;
  alerts = alerters;
}

void StatsAlerter::checkAndAlert(const std::vector<float>& values)
{
  if(*std::max_element(values.begin(),values.end()) > threshold)
  {
    alerts[0]->emailSent = true;
    alerts[1]->ledGlows = true;
  }
  else
  {
    alerts[0]->emailSent = false;
    alerts[1]->ledGlows = false;
  }
}
