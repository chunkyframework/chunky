# Chunky

The productive web framework.

> Project Status: Idea Phase (Read: No code yet)

## The Idea

There are lots of view layers out there for web applications: React, Preact, Inferno, Vue, etc, and they all share one common problem: You need to provide your own architecture for data fetching, modeling your data, validating data, folder structure, etc.

Chunky provides that missing architecture.

### Chunky CLI

Chunky's CLI provides a single tool to create, develop, test, and deploy chunky applications.
Generating schemas for your data, components, validators, etc can all be managed by the Chunky CLI.

### Chunky Data

Chunky provides an opinionated solution for fetching and storing data across your application.
The primary source of data is a module called a `Repo`.
The Repo module is what you interract with to store and retrieve data from.
If the data does not exist in the Repo, it will get it from somewhere else, like an API or other storage location.
Each Repo uses single Adapter to do the data fetching/storing.

You tell Chunky what the data looks like using a Schema.
You can validate schemas using Changesets.

### Chunky Contexts

Chunky's project architecture splits your application into two aspects: The business layer and the UI layer.
The business layer is where all of the fun is. In the business layer, you split your application into contexts. These contexts are domain-specific, so they are completely unique to your application. Each context has a public-facing API (eg, in a todo app, you would expose a functions like `getTodoById` or `createTodo` in the public-facing API).

### Chunky Renderers

One opinion Chunky doesn't have (for the most part) is how you render your application.
To bridge your UI to your business-logic, Chunky provides wrappers (named "Renderers") for popular view libraries.
By going this route, Chunky can provide business-logic to the rendering layer in whatever way is the most performant and idiomatic for the library you're using.

At the moment, Chunky only provides rendering support for Reason React.
Injecting Chunky into your Reason React apps is as easy as using a higher-order component (For React versions below `16.8`) or provided hooks (For React versions `16.8`+).

## Going forward

The initial version of Chunky will be built for ReasonML and Reason React.
By choosing those two technologies to begin with gives Chunky an extremely solid foundation to go forward with.
Using ReasonML gives us an extremely strict (read: Your application won't compile) way of enforcing convention through a strong type system.

Once we nail those two down, we will try to target JavaScript.
Moving from ReasonML down to JavaScript will probably be somewhat of a task, because the module system is completely different and we want to make sure the developer experience is great on all languages.

After getting Chunky working with JavaScript, we can generate TypeScript and Flow type definitions with the [genType](https://github.com/cristianoc/genType) project and support those two languages as well.

After supporting TypeScript and Flow, the next thing to support would be more renderers, like Vue or Preact.

## Inspiration

Chunky draws inspiration from primarily a lot of sources, but to name a few: [The Phoenix Framework](https://phoenixframework.org/), [Ecto](https://github.com/elixir-ecto/ecto), and [Ember.js](https://emberjs.com/).
Phoenix was a great source of inspiration for folder architecture and pragmatic [Domain-Driven Design](https://en.wikipedia.org/wiki/Domain-driven_design) patterns in production applications.
Ecto provided a lot of inspiration on how to architect the data store and, of course, changesets.
Ember was a huge inspiration on the idea of an architecture and the value it creates.
