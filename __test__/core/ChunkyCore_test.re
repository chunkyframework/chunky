open Jest;

test("main", () =>
  Expect.(expect(ChunkyCore.main()) |> toBe("Howdy!"))
);
