-module(halfwordtest).
-export([run_test1/0, run_test2/0]).
-define(NOT_LOADED, not_loaded(?LINE)).
-on_load(init/0).

init() ->
    PrivDir = case code:priv_dir(?MODULE) of
        {error, _} ->
            EbinDir = filename:dirname(code:which(?MODULE)),
            AppPath = filename:dirname(EbinDir),
            filename:join(AppPath, "priv");
        Path ->
            Path
    end,
    erlang:load_nif(filename:join(PrivDir, "halfwordtest"), 0).


not_loaded(Line) ->
    exit({not_loaded, [{module, ?MODULE}, {line, Line}]}).

run_test1() ->
    ?NOT_LOADED.

run_test2() ->
    ?NOT_LOADED.
