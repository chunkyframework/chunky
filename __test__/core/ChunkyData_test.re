open Jest;

test("main", () =>
  Expect.(expect(ChunkyData.main()) |> toBe("Data!"))
);
