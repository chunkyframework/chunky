open Jest;

test("main", () =>
  Expect.(expect(ChunkyReact.main()) |> toBe("React!"))
);
