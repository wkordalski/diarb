#ifndef __DIARB_ENGINE_OBJECT_HPP_17DA0500
#define __DIARB_ENGINE_OBJECT_HPP_17DA0500

namespace diarb
{
  class object
  {
  public:
    virtual ~object() = 0;
    
    // active() - returns true if the object is active
    // state() - returns state of the object (is serializable)
    // Only active objects are simulated and only its state is recorded
  };
}

#endif
 
