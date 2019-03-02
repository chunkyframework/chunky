open Jest;

test("main", () =>
  Expect.(expect(ChunkyCli.main()) |> toBe("Cli!"))
);
