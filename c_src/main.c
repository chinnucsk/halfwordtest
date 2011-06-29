#include "erl_nif.h"

ERL_NIF_TERM
run_test(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int64(env, 1);
}


static ErlNifFunc funcs[] =
{
    {"run_test", 0, run_test},
};

ERL_NIF_INIT(halfwordtest, funcs, NULL, NULL, NULL, NULL);
