#include "PartieLimitee.hpp"

PartieLimitee::PartieLimitee() {}

PartieLimitee::PartieLimitee(int max) : maxPoints(max) {}

PartieLimitee::~PartieLimitee() {}

int PartieLimitee::getMaxPoints() const {
    return maxPoints;
}
void PartieLimitee::setMaxPoints(int max) {
    maxPoints = max;
}

