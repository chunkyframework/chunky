open Jest;

test("main", () =>
  Expect.(expect(ChunkyRendererReasonReact.main()) |> toBe("React!"))
);
