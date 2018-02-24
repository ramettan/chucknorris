#include <chucknorris.h>
#include <cstring>

#include <chucknorris.hpp>

chuck_norris_t* chuck_norris_init()
{
  return new ChuckNorris();
}

const char* chuck_norris_get_fact(chuck_norris_t* chuck_norris)
{
  return strdup(chuck_norris->getFact().c_str());
}

void chuck_norris_deinit(chuck_norris_t* chuck_norris)
{
  delete chuck_norris;
}