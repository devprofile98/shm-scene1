#ifndef PLAYGROUND_BIRD_ACTOR_H
#define PLAYGROUND_BIRD_ACTOR_H

#include "Actor.hpp"
#include "InputHandler.hpp"
#include "birdPhysic.hpp"

class BirdActor : public SHM::Actor {
public:
  BirdActor();
  virtual ~BirdActor();

  void setUpModel() override;
  // void eachFrame() override;
  // void jump() override;
};

// class JumpAction : public SHM::Command {
//     void execute(BaseActor *actor) override;
// };

// class WAction : public SHM::Command {
//     void execute(BaseActor *actor) override;
// };

#endif // PLAYGROUND_BIRD_ACTOR_H