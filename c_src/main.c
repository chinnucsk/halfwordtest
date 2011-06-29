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

ERL_NIF_TERM
run_test3(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int64(env, 134217727);
}

ERL_NIF_TERM
run_test4(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
    return enif_make_int64(env, 134217728);
}

static ErlNifFunc funcs[] =
{
    {"run_test1", 0, run_test1},
    {"run_test2", 0, run_test2},
    {"run_test3", 0, run_test3},
    {"run_test4", 0, run_test4}
};

ERL_NIF_INIT(halfwordtest, funcs, NULL, NULL, NULL, NULL);
