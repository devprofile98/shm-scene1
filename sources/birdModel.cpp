#include "birdModel.hpp"

BirdActor::BirdActor() {
  SHM::Engine::GetEngine()->getRenderer()->m_actors.push_back(this);
  //   SHM::Engine::GetEngine()->setMovingCharacter(this);
  // Command *jump_action = new JumpAction{};
  // Command *w_action = new WAction{};
  // TODO free this two action pointer on destruction
  // SHM::Engine::GetEngine()->setActionToKey(KEY::KEYBOARD_SPACE, jump_action);
  // SHM::Engine::GetEngine()->setActionToKey(KEY::KEYBOARD_W, w_action);

  std::cout << "BIRD Actor created!" << std::endl;
}
BirdActor::~BirdActor() { std::cout << "BIRD Actor destroyed!" << std::endl; }

void BirdActor::setUpModel() {
  this->model->setPosition({-3.0f, 5.7f, 0.0f});
  this->model->setScale({0.5f, 0.5f, 0.5f});
  this->model->setRotation({0.0f, -1.0f, 0.0f});
  // SHM::Engine::GetEngine()->getCamera()->attachTo(this,
  // (uint8_t)SHM::Camera::ATTACH::X);
  this->m_physic_component =
      new BirdPhysic{this->model->getPosition(), {0.1f, 0.0f}, true};
}