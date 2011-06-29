#include "erl_nif.h"

ERL_NIF_TERM
run_test1(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int64(env, 1);
}

ERL_NIF_TERM
run_test2(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int(env, 1);
}

static ErlNifFunc funcs[] =
{
    {"run_test1", 0, run_test1},
    {"run_test2", 0, run_test2}
};

ERL_NIF_INIT(halfwordtest, funcs, NULL, NULL, NULL, NULL);
