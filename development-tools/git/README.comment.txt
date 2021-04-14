<p><b>Version Control</b> is a system that records changes to a file or set of files over time so that you can recall specific versions later. It allows you to revert selected files back to a previous state, revert the entire project back to a previous state, compare changes over time, see who last modified something that might be causing a problem, who introduced an issue and when, and if you screw things up or lose files, you can easily recover.</p>

<p><b>Git</b> has three main states that your files can reside in:</p>

<ul>
	<li><b>modified</b></li>
	<li><b>staged</b></li>
	<li><b>committed</b></li>
</ul>

<p>This leads us to the three main sections of a Git project: the <b>working tree</b>, the <b>staging area</b>, and the <b>Git directory</b>.</p>

![git-areas.png]

<p>The <b>working tree</b> is a single checkout of one version of the project. These files are pulled out of the compressed database in the Git directory and placed on disk for you to use or modify.</p>

<p>The <b>staging area</b> is a file, generally contained in your Git directory, that stores information about what will go into your next commit. Its technical name in Git parlance is the “<b>index</b>”, but the phrase “<b>staging area</b>” works just as well.</p>

<p>The <b>Git directory</b> is where Git stores the metadata and object database for your project. This is the most important part of Git, and it is what is copied when you clone a repository from another computer.</p>

<p>If a particular version of a file is in the Git directory, it’s considered <b>committed</b>. If it has been modified and was added to the <b>staging area</b>, it is <b>staged</b>. And if it was changed since it was checked out but has not been staged, it is <b>modified</b>.</p>
